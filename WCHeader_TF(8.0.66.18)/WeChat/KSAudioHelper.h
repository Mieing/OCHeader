@interface KSAudioHelper : NSObject

+ (id)formatOSStatus:(int)a0;
+ (id)guessAudioFileType:(id)a0 propertyId:(unsigned int)a1;
+ (unsigned int)getAudioFormatByFileHeader:(id)a0 fileExtension:(id)a1;
+ (unsigned int)hintForFileExtension:(id)a0;

@end
