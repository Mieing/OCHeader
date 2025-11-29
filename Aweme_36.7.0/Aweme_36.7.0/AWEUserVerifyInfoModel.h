@class NSString;

@interface AWEUserVerifyInfoModel : NSObject <AWEUserVerifyInfoModelProtocol>

@property (nonatomic) BOOL isBizAccount;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) long long labelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
