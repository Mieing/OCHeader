@class NSString;

@interface ACCChapterEditorService : HTSService <ACCChapterEditorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableChapterEditorOpt;

@end
