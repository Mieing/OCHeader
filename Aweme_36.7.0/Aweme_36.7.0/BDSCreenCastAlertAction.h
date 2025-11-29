@class NSAttributedString;

@interface BDSCreenCastAlertAction : NSObject

@property (retain, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) id /* block */ handler;

+ (id)actionWithTitle:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;

@end
