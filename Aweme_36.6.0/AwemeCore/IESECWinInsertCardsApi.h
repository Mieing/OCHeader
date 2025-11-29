@class NSDictionary, NSString;

@interface IESECWinInsertCardsApi : NSObject

@property (copy, nonatomic) NSDictionary *insertCardsParams;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *filterPids;
@property (copy, nonatomic) NSString *secAuthorId;
@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *apiHost;
@property (copy, nonatomic) NSString *apiPath;
@property (retain, nonatomic) Class modelClass;

- (void)fetchWinInsertCardsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
