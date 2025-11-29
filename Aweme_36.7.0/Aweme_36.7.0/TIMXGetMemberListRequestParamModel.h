@class NSString, NSArray, NSNumber, NSMutableArray;

@interface TIMXGetMemberListRequestParamModel : NSObject <TIMXGetMemberListRequestParamProtocol>

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long shortID;
@property (nonatomic) int convType;
@property (nonatomic) int syncScene;
@property (nonatomic) long long localMemberVersion;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSArray *memberList;
@property (retain, nonatomic) NSNumber *firstPageVersion;
@property (retain, nonatomic) NSMutableArray *completionArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConvID:(id)a0 shortID:(long long)a1 convType:(int)a2 syncScene:(int)a3 localMemberVersion:(long long)a4 cursor:(long long)a5 memberList:(id)a6 firstPageVersion:(id)a7 completion:(id /* block */)a8;
- (void).cxx_destruct;

@end
