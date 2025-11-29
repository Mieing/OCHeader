@class NSString, NSData, WSSimilarEmotItemView;

@interface WSEmoticonModel : NSObject

@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *docID;
@property (retain, nonatomic) NSString *encryptUrl;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *productUrl;
@property (retain, nonatomic) NSString *thumb;
@property (retain, nonatomic) NSString *sourceTitle;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int pageNumber;
@property (retain, nonatomic) NSString *hevcUrl;
@property (retain, nonatomic) NSString *hevcMd5;
@property (retain, nonatomic) NSString *meaning;
@property (retain, nonatomic) NSData *imgData;
@property (weak, nonatomic) WSSimilarEmotItemView *weakHolder;

- (id)emoticonWrap;
- (void).cxx_destruct;

@end
