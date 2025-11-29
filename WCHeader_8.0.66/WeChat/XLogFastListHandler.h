@class NSArray, NSString;

@interface XLogFastListHandler : NSObject <FastListHandler>

@property (retain, nonatomic) NSArray *rules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getDynamicRulesOnScene:(int)a0;
- (void).cxx_destruct;

@end
