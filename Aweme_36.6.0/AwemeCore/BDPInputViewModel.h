@class NSString, BDPInputViewPlaceHolderStyleModel, BDPInputViewStyleModel;

@interface BDPInputViewModel : NSObject

@property (nonatomic) BOOL fixed;
@property (nonatomic) BOOL focus;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL password;
@property (nonatomic) long long cursor;
@property (nonatomic) long long selectionStart;
@property (nonatomic) long long selectionEnd;
@property (nonatomic) long long maxLength;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *confirmType;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) BDPInputViewPlaceHolderStyleModel *placeholderStyle;
@property (retain, nonatomic) BDPInputViewStyleModel *style;
@property (nonatomic) BOOL adjustPosition;
@property (nonatomic) BOOL holdKeyboard;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)attributedPlaceholder;

@end
