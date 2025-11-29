@class NSString;

@interface ACCAEEffectPanelRequestCommonModel : NSObject

@property (retain, nonatomic) NSString *panelName;
@property (retain, nonatomic) NSString *categoryID;
@property (retain, nonatomic) NSString *categoryKey;
@property (nonatomic) unsigned long long pageCount;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long sortingPosition;

- (void).cxx_destruct;

@end
