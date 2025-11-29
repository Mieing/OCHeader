@class NSString;

@interface NovelCommentBarInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL hasTag;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasState;
@property (copy, nonatomic) NSString *darkIcon;
@property (nonatomic) BOOL hasDarkIcon;
@property (copy, nonatomic) NSString *bookId;
@property (nonatomic) BOOL hasBookId;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (copy, nonatomic) NSString *popupData;
@property (nonatomic) BOOL hasPopupData;

+ (id)descriptor;

@end
