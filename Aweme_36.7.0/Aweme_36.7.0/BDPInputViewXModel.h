@class NSString, BDPInputViewXStyleModel, BDPInputViewXPlaceHolderStyleModel;

@interface BDPInputViewXModel : NSObject

@property (copy, nonatomic) NSString *data;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL holdKeyboard;
@property (nonatomic) BOOL confirmHold;
@property (copy, nonatomic) NSString *confirmType;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) BDPInputViewXStyleModel *style;
@property (retain, nonatomic) BDPInputViewXPlaceHolderStyleModel *placeholderStyle;
@property (nonatomic) BOOL adjustPosition;
@property (nonatomic) BOOL password;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) long long maxLength;
@property (nonatomic) BOOL focus;
@property (nonatomic) long long cursor;
@property (nonatomic) long long selectionStart;
@property (nonatomic) long long selectionEnd;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
