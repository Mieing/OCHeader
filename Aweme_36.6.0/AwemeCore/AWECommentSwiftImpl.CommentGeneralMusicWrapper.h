@class NSNumber;

@interface AWECommentSwiftImpl.CommentGeneralMusicWrapper : NSObject <AWECommentGeneralMusicWrapperProtocol, NSObject> {
    void /* unknown type, empty encoding */ musicModel;
    void /* unknown type, empty encoding */ musicCommentService;
}

@property (nonatomic, retain) NSNumber *commentCountTotal;

- (id)awemeInfo;
- (id)channelObjID;
- (id)generalMusicModel;
- (id)trackParamsWithEventType:(long long)a0;
- (BOOL)authorIsCurrentLoginUser;
- (id)serviceID;
- (void).cxx_destruct;
- (id)groupID;
- (id)init;
- (id)itemID;
- (id)author;

@end
