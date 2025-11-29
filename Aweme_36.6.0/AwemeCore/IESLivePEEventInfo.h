@class NSString, NSDictionary;

@interface IESLivePEEventInfo : NSObject

@property (nonatomic) double createTimeS;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *params;

- (void).cxx_destruct;
- (id)init;

@end
