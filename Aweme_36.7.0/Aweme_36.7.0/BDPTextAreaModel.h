@class NSString, BDPTextAreaStyleModel, BDPTextAreaPlaceHolderStyleModel;

@interface BDPTextAreaModel : NSObject

@property (nonatomic) BOOL focus;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL disabled;
@property (nonatomic) long long cursor;
@property (nonatomic) long long selectionStart;
@property (nonatomic) long long selectionEnd;
@property (nonatomic) long long maxLength;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *confirmType;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) BDPTextAreaPlaceHolderStyleModel *placeholderStyle;
@property (retain, nonatomic) BDPTextAreaStyleModel *style;
@property (nonatomic) BOOL adjustPosition;
@property (nonatomic) BOOL showConfirmBar;
@property (nonatomic) BOOL holdKeyboard;
@property (nonatomic) BOOL confirmHold;
@property (nonatomic) BOOL disableDefaultPadding;
@property (nonatomic) BOOL autoHeight;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
