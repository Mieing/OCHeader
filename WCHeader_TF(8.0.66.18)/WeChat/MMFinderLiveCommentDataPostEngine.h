@class NSString;

@interface MMFinderLiveCommentDataPostEngine : MMLiveCommentDataPostEngine <WCFinderLiveExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)convertAppMsgTypeFromPostTask:(unsigned long long)a0;

@end
