@class NSString, NSDictionary;

@interface ARTBusinessInput : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) float threshold;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;
- (id)init;

@end
