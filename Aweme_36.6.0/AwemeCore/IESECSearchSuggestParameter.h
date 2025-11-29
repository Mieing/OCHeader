@class NSString;

@interface IESECSearchSuggestParameter : NSObject

@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) long long cursor;
@property (nonatomic) double gapDuration;
@property (nonatomic) unsigned long long enterType;

- (void).cxx_destruct;

@end
