@class NSString, NSBundle;
@protocol DUXIconColorProtocol;

@interface DUXIconConfiguration : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) id<DUXIconColorProtocol> color;
@property (retain, nonatomic) NSBundle *bundle;
@property (nonatomic) BOOL isImageFromCache;
@property (nonatomic) BOOL closePreHeating;

- (id)initWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
- (BOOL)validtyCheck;
- (void).cxx_destruct;
- (id)UUID;

@end
