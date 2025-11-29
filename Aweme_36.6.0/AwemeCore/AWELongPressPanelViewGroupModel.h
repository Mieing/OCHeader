@class NSArray;

@interface AWELongPressPanelViewGroupModel : NSObject

@property (nonatomic) BOOL isDYYYCustomGroup;
@property (nonatomic) unsigned long long groupType;
@property (retain, nonatomic) NSArray *groupArr;
@property (nonatomic) long long numberOfRowsInSection;
@property (nonatomic) long long cellHeight;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isModern;

+ (unsigned long long)getGroupModelTypeOfType:(id)a0;
+ (id)longPressPanelViewGroupModelWithType:(id)a0;

- (void).cxx_destruct;

@end
