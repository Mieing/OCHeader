@class NSString, NSDictionary;

@interface BDARCloseButtonModel : NSObject

@property (copy, nonatomic) NSString *closeIcon;
@property (copy, nonatomic) NSString *unfinishedTemplate;
@property (copy, nonatomic) NSString *finishedTemplate;
@property (nonatomic) BOOL displayIcon;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (id)toDict;

@end
