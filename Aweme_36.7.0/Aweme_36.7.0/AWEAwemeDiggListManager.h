@class NSString, NSMutableArray;

@interface AWEAwemeDiggListManager : NSObject <AWEAwemeDiggListManagerProtocol>

@property (retain, nonatomic) NSMutableArray *diggListArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

@end
