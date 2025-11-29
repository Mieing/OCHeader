@class NSString;

@interface AWEFeedAnchorDispatchHandler : NSObject <AWELocalLifeAnchorBuilderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localLifeAnchorSupportTypeValuesWithScene:(long long)a0;
+ (id)getAnchorWithDataBuilder:(id)a0;
+ (id)p_getLocalLifeAnchorInfoWithAweme:(id)a0;


@end
