@class NSString, NSNumber;

@interface BDPCDDynamicCardUIPropsLeftInfoModel : BDPCDDynamicCardUIPropsModel

@property (copy, nonatomic) NSString *textContent;
@property (nonatomic) long long textType;
@property (retain, nonatomic) NSNumber *countdown;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
