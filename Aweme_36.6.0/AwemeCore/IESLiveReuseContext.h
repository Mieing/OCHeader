@class NSString;

@interface IESLiveReuseContext : NSObject

@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *objectName;
@property (retain, nonatomic) NSString *reuseIdentifier;

- (id)initWithRoomId:(id)a0 objectName:(id)a1;
- (id)generateReuseIdentifier;
- (void).cxx_destruct;
- (id)init;

@end
