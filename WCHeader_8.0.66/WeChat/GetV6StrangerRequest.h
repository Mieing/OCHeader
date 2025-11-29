@interface GetV6StrangerRequest : NSObject

+ (BOOL)isV6StrangerEncodedUsername:(id)a0;
+ (void)getV6StrangerWithEncodedUsername:(id)a0 completion:(id /* block */)a1;
+ (void)getV6StrangerListWithReqInfoList:(id)a0 completion:(id /* block */)a1;

@end
