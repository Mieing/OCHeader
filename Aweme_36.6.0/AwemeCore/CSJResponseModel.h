@class NSString;

@interface CSJResponseModel : NSObject <CSJResponseModel>

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) long long returnValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
