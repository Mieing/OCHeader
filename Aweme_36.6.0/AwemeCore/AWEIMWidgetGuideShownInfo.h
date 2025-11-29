@class NSString;

@interface AWEIMWidgetGuideShownInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) double time;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
