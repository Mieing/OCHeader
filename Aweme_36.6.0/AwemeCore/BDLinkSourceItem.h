@class NSString;

@interface BDLinkSourceItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ip;
@property (nonatomic) unsigned short port;

- (void).cxx_destruct;

@end
