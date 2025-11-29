@class NSString, NSDictionary, UIImage;

@interface AWEShareChannel : NSObject <AWEShareChannelAppearance, AWEShareChannelAction>

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long option;
@property (copy, nonatomic) id /* block */ shareActionBlock;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *channelImages;
@property (retain, nonatomic) UIImage *smallImage;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageForStyleOption:(unsigned long long)a0;
- (BOOL)shareWithContext:(id)a0;
- (id)initWithType:(long long)a0 option:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
