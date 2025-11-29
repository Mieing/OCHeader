@class ACCAIGCLoraPersonInfo, NSString;

@interface ACCAIGCMultiLoraInfoCollectionViewCellModel : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL darkMode;
@property (nonatomic) BOOL greyMode;
@property (nonatomic) BOOL supportDelete;
@property (nonatomic) BOOL supportSelect;
@property (nonatomic) unsigned long long selectStyle;
@property (retain, nonatomic) ACCAIGCLoraPersonInfo *loraInfo;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;

@end
