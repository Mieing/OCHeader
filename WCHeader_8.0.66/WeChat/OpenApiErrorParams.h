@class NSString;

@interface OpenApiErrorParams : NSObject

@property (copy, nonatomic) NSString *errDesc;
@property (copy, nonatomic) NSString *bottomBtnDesc;
@property (copy, nonatomic) id /* block */ bottomBtnHandler;

- (id)description;
- (void).cxx_destruct;

@end
