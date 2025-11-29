@class NSString, BDPTextAreaXStyleModel, BDPTextAreaXPlaceHolderStyleModel;

@interface BDPTextAreaXModel : NSObject

@property (copy, nonatomic) NSString *data;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL holdKeyboard;
@property (nonatomic) BOOL confirmHold;
@property (copy, nonatomic) NSString *confirmType;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) BDPTextAreaXStyleModel *style;
@property (retain, nonatomic) BDPTextAreaXPlaceHolderStyleModel *placeholderStyle;
@property (nonatomic) BOOL adjustPosition;
@property (nonatomic) BOOL showConfirmBar;
@property (nonatomic) BOOL disableDefaultPadding;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) long long maxLength;
@property (nonatomic) BOOL focus;
@property (nonatomic) long long cursor;
@property (nonatomic) long long selectionStart;
@property (nonatomic) long long selectionEnd;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
