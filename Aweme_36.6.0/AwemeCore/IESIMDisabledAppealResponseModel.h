@class NSString, NSArray;

@interface IESIMDisabledAppealResponseModel : NSObject <NSCoding>

@property (readonly, copy, nonatomic) NSString *tips;
@property (readonly, copy, nonatomic) NSArray *templates;
@property (readonly, copy, nonatomic) NSArray *punishIdList;
@property (nonatomic) double requestTime;
@property (nonatomic) BOOL isPunished;
@property (nonatomic) BOOL responseError;
@property (nonatomic) BOOL disableIMAction;
@property (nonatomic) double disableIMActionExpireTime;

- (BOOL)hasValidBanInfo;
- (BOOL)shouldBlockIMAction;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
