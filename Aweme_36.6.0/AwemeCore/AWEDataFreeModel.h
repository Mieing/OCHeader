@class NSString, NSNumber;

@interface AWEDataFreeModel : NSObject

@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic) long long showTime;
@property (nonatomic) NSNumber *experiments;
@property (retain, nonatomic) NSString *schema;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
