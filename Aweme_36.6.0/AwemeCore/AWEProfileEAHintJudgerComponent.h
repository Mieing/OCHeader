@class NSString;

@interface AWEProfileEAHintJudgerComponent : AWEProfileEABaseController <AWEProfileEADataSourceEvent, AWEProfileEAHintJudgerProtocol>

@property (nonatomic) BOOL hasShowHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
