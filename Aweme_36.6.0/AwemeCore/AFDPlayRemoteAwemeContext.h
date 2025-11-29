@class NSString, NSDictionary, AWEListDataController;

@interface AFDPlayRemoteAwemeContext : NSObject <AFDPlayRemoteAwemeContextProtocol>

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) id /* block */ sendMessageBlock;
@property (copy, nonatomic) NSDictionary *infoDict;
@property (nonatomic) long long feedType;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (copy, nonatomic) NSString *initialItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
