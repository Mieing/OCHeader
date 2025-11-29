@class NSString;

@interface AWELRUObject : NSObject

@property (weak, nonatomic) AWELRUObject *preObject;
@property (weak, nonatomic) AWELRUObject *nextObject;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;

@end
