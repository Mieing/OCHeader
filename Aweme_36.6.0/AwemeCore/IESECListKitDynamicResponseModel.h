@class NSError, NSString, NSDictionary;

@interface IESECListKitDynamicResponseModel : NSObject

@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isMain;
@property (copy, nonatomic) NSString *apiKey;
@property (copy, nonatomic) NSDictionary *paramsFromClient;
@property (nonatomic) BOOL preMainProcessEnabled;
@property (retain, nonatomic) id responseData;

+ (id)responseModelWithData:(id)a0 error:(id)a1;

- (BOOL)mallApiPreMainProcessEnabled;
- (void).cxx_destruct;

@end
