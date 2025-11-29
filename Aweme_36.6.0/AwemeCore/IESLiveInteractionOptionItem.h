@class NSString;

@interface IESLiveInteractionOptionItem : NSObject

@property (nonatomic) long long tag;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
