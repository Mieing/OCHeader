@class NSString, NSMutableDictionary;

@interface AmoebaBridgePageInfo : NSObject

@property (nonatomic) unsigned int pageId;
@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSMutableDictionary *params;

- (id)init;
- (void).cxx_destruct;

@end
