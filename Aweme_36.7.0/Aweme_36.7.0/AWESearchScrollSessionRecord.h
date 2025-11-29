@class NSString, NSDictionary;

@interface AWESearchScrollSessionRecord : NSObject

@property (copy, nonatomic) NSString *sceneIdentifier;
@property (copy, nonatomic) NSString *fakeScene;
@property (nonatomic) double beginTS;
@property (nonatomic) double endTS;
@property (copy, nonatomic) NSDictionary *hitchRanges;

- (void).cxx_destruct;
- (id)init;
- (void)begin;
- (void)end;

@end
