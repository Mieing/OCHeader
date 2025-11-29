@class NSString;

@interface AWESearchPaidTagComponentModel : AWESearchComponentBasicModel

@property (copy, nonatomic) NSString *paidText;
@property (copy, nonatomic) NSString *descText;
@property (nonatomic) BOOL hidePaidText;
@property (nonatomic) BOOL hideDescText;
@property (nonatomic) BOOL forceUseDescText;
@property (nonatomic) double preViewStartTime;
@property (nonatomic) double preViewEndTime;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
