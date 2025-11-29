@class NSNumber, NSString;

@interface AWECommentSwiftImpl.CommentGeneralHotSpotWrapper : NSObject <AWECommentGeneralHotSpotCardWrapperProtocol, AWECommentGeneralHotSpotPageWrapperProtocol, NSObject> {
    void /* unknown type, empty encoding */ hotSpotCardModel;
    void /* unknown type, empty encoding */ hotSpotPageModel;
    void /* function */ hotSpotCommentSchema;
}

@property (nonatomic, retain) NSNumber *commentCountTotal;
@property (nonatomic, copy) NSString *hotSpotCommentSchema;

- (id)awemeInfo;
- (id)channelObjID;
- (unsigned long long)hotSpotModelType;
- (id)newHotSpotCardModel;
- (unsigned long long)hotSpotPageTab;
- (id)hotSpotKeyword;
- (id)fromHotGroupID;
- (id)newHotSpotCommentModel;
- (id)getHotspotParams;
- (BOOL)needIMComponentWithReferString:(id)a0;
- (BOOL)needUGComponentWithReferString:(id)a0;
- (id)serviceID;
- (void).cxx_destruct;
- (id)groupID;
- (id)init;
- (id)itemID;
- (id)author;

@end
