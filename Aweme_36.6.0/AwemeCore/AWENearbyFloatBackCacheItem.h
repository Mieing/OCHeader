@class AWENearbyFloatBackView, AWENearbyGuideFloatBackModel, NSMutableSet, UIView, NSDate;

@interface AWENearbyFloatBackCacheItem : NSObject

@property (weak, nonatomic) UIView *attachView;
@property (retain, nonatomic) AWENearbyFloatBackView *backView;
@property (retain, nonatomic) AWENearbyGuideFloatBackModel *floatBackModel;
@property (retain, nonatomic) NSDate *backViewShowedDate;
@property (retain, nonatomic) NSMutableSet *feedScrolledItemIDSet;

+ (id)createItemWithBackView:(id)a0 floatBackModel:(id)a1;

- (BOOL)isSameFloatBackModel:(id)a0;
- (void).cxx_destruct;

@end
