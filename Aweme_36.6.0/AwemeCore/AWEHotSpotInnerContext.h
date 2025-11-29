@class NSString, NSDictionary;
@protocol AWEHotPointPanelControllerDelegate;

@interface AWEHotSpotInnerContext : NSObject <NSCopying>

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL isNearByStyle;
@property (nonatomic) long long hotFeedStyle;
@property (weak, nonatomic) id<AWEHotPointPanelControllerDelegate> delegate;
@property (copy, nonatomic) NSString *hotSpotServerParamStr;
@property (copy, nonatomic) NSDictionary *bizParams;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
