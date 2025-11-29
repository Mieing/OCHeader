@class NSString, HalfScreen;

@interface GameJumpInfo : NSObject

@property (retain, nonatomic) NSString *jumpId;
@property (nonatomic) long long jumpType;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) HalfScreen *halfScreen;

- (id)getXmlSectionString;
- (void).cxx_destruct;

@end
