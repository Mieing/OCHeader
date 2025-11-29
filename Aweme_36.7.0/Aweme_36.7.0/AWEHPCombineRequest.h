@class NSString, NSDictionary;
@protocol AWEHPNetCombineResponseProtocol;

@interface AWEHPCombineRequest : NSObject <AWEHPNetCombineRequestProtocol>

@property (retain, nonatomic) id<AWEHPNetCombineResponseProtocol> response;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSDictionary *body;
@property (copy, nonatomic) NSString *requestUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attachObject:(id)a0 forKey:(id)a1;
- (id)getAttachedObjectForKey:(id)a0;
- (void)appendBody:(id)a0;
- (id)getSceneString;
- (void).cxx_destruct;

@end
