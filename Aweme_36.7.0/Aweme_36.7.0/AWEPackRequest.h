@class NSArray, NSString, NSDictionary;

@interface AWEPackRequest : NSObject

@property (retain, nonatomic) NSArray *idList;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSDictionary *trackExtra;

- (void).cxx_destruct;

@end
