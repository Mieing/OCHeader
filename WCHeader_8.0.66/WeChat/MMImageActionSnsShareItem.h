@class NSString;

@interface MMImageActionSnsShareItem : MMImageActionSheetItem <WCCommitViewResultDelegate>

@property (retain, nonatomic) NSString *noteId;
@property (nonatomic) unsigned int favLocalId;
@property (nonatomic) BOOL isFromFav;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
