@class NSString, NSDictionary;
@protocol AWEHPNetCombineRequestProtocol;

@interface AWEHPCombineResponse : NSObject <AWEHPNetCombineResponseProtocol>

@property (retain, nonatomic) id<AWEHPNetCombineRequestProtocol> request;
@property (copy, nonatomic) NSString *requestUserID;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSString *serverLogID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
