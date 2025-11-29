@class NSArray;

@interface WCAdInteractionInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSArray *eventInfos;
@property (retain, nonatomic) NSArray *resourceInfos;
@property (retain, nonatomic) NSArray *actionInfos;
@property (retain, nonatomic) NSArray *determinationInfos;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
