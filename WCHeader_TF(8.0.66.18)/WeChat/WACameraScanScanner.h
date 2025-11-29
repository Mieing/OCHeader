@class NSString, NSObject;
@protocol OS_dispatch_queue, WACameraQRCodeScannerDelegate;

@interface WACameraScanScanner : NSObject <IUiUtilExt> {
    char *_sendImage;
    int _sendImageBufferSize;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _decodeData;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _decodeType;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _decodeCharset;
    struct QBAR_REPORT_MSG { int qrcodeVersion; int pyramidLv; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } binaryMethod; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } ecLevel; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } charsetMode; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } scale_list_; float decode_scale_; unsigned int detect_time_; unsigned int sr_time_; unsigned int reverse_cls_time_; unsigned int reverse_cls_count_; BOOL has_sr; unsigned int decode_time_; BOOL in_white_list_; BOOL in_black_list_; unsigned int pre_detect_time_; unsigned int detect_infer_pre_time_; unsigned int detect_infer_time_; unsigned int detect_infer_after_time_; unsigned int after_detect_time_; unsigned int seg_time_; BOOL has_seg; unsigned int after_seg_time_; unsigned int decode_all_time_; BOOL has_decode; unsigned int decode_success_result_type_; BOOL init_reverse_cls_success_; BOOL close_reverse_cls_; } _reportMsg;
    struct QBar { struct QBarDecode *x0; } *_qbar;
    int _scanCodeType;
    NSObject<OS_dispatch_queue> *_scanQueue;
}

@property (nonatomic) unsigned int scanIndex;
@property (nonatomic) double lastScanTime;
@property (weak, nonatomic) id<WACameraQRCodeScannerDelegate> delegate;
@property (retain, nonatomic) NSString *resultData;
@property (retain, nonatomic) NSString *resultType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRegion;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scanRegion;
@property (nonatomic) double scanFreq;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraViewRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 CodeType:(int)a1;
- (void)willOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)internalProcessSampleBuffer_iOS174:(struct opaqueCMSampleBuffer { } *)a0;
- (void)internalProcessSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)doScanCode:(char *)a0 outSize:(struct CGSize { double x0; double x1; })a1 scanRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scanOffset:(struct CGPoint { double x0; double x1; })a3 angel:(double)a4;
- (id)getStringFromUTF8Bytes:(const char *)a0 LENGTH:(int)a1;
- (void)notifyGotScanResult:(id)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageRectBySearchResult:(struct vector<QBAR_POINT, std::allocator<QBAR_POINT>> { struct QBAR_POINT *x0; struct QBAR_POINT *x1; struct __compressed_pair<QBAR_POINT *, std::allocator<QBAR_POINT>> { struct QBAR_POINT *x0; } x2; })a0 outSize:(struct CGSize { double x0; double x1; })a1 angel:(double)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
