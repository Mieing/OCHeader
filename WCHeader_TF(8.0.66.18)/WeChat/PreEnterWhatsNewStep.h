@interface PreEnterWhatsNewStep : PreEnterBaseStep {
    BOOL m_useDismissVerticalAnimation;
}

- (void)startStep;
- (void)showWeAppWhatsNew;
- (void)showWhatsNewWillEnd;

@end
