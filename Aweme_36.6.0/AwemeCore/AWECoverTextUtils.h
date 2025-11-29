@class NSString;

@interface AWECoverTextUtils : NSObject <ACCDraftResourceRecoverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)convertTextAlignment:(unsigned long long)a0;
+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)a0;
+ (void)updateWithDownloadedEffects:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
+ (id)colorFromARGBString:(id)a0;
+ (void)textCutOffTextView:(id)a0 lengthLimit:(unsigned long long)a1 lineLimit:(unsigned long long)a2;
+ (id)monitorExceptionWithError:(id)a0;
+ (int)convertLineJoinMode:(unsigned long long)a0;
+ (id)storyFontModelChangeSize:(id)a0 withRate:(double)a1;
+ (BOOL)textCutOffTextView:(id)a0 lengthLimit:(unsigned long long)a1;
+ (BOOL)textCutOffTextView:(id)a0 lineLimit:(unsigned long long)a1;
+ (int)convertTextDrawMode:(unsigned long long)a0;
+ (id)storyTextAlignmentToString:(long long)a0;
+ (BOOL)textsNotEmpty:(id)a0;
+ (BOOL)coverTextModel:(id)a0 equal:(id)a1;


@end
