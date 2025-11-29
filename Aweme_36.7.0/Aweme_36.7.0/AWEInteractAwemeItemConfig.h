@class NSString, NSDictionary;

@interface AWEInteractAwemeItemConfig : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *originItemID;
@property (nonatomic) BOOL isFamiliar;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long nearbyLevel;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
