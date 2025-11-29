@class NSString, NSMutableDictionary;

@interface KindaTenpayCgi : NSObject <MMTenpayCgi>

@property (retain, nonatomic) NSMutableDictionary *runningCgiMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)request:(int)a0 url:(id)a1 reqText:(id)a2 reqTextWx:(id)a3 callback:(id)a4;
- (void).cxx_destruct;

@end
