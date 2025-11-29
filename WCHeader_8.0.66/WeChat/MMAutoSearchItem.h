@class NSString;

@interface MMAutoSearchItem : MMObject

@property (retain, nonatomic) NSString *keyWord;
@property (nonatomic) BOOL startFromFirst;

+ (id)itemWithKeyWord:(id)a0 startFromFirst:(BOOL)a1;

- (void).cxx_destruct;

@end
