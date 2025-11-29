@interface WXVoIPAudioPortType : NSObject

+ (id)unknownPortType;
+ (id)getOutputPortType:(id)a0;
+ (id)getInUseOutputPortType;
+ (id)getInputPortType:(id)a0;
+ (int)getOutputDeviceType:(id)a0;
+ (int)getInputDeviceType:(id)a0;
+ (BOOL)isInputHeadset:(id)a0;
+ (BOOL)isOutputHeadset:(id)a0;
+ (int)getInUsetPlayDeviceType;

@end
