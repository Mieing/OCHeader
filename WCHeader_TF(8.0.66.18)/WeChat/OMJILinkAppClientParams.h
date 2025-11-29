@class NSString, OMJILinkLoginParams;

@interface OMJILinkAppClientParams : NSObject

@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, nonatomic) OMJILinkLoginParams *loginParams;
@property (readonly, nonatomic) id /* block */ loginParamsGetterBlock;

- (id)initWithAppID:(id)a0 loginParams:(id)a1;
- (id)initWithAppID:(id)a0 loginParamsGetterBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
