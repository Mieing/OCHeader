@class NSString, NSArray;

@interface AWEDeepLinkPathInfo : NSObject

@property (copy, nonatomic) NSString *pathString;
@property (nonatomic) unsigned long long offset;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) BOOL limitHost;
@property (retain, nonatomic) NSArray *allowedHostList;

- (void).cxx_destruct;

@end
